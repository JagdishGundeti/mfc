// ConfigOpt.h : CConfigOpt 的声明

#pragma once
#include "resource.h"       // 主符号
#include <osgEarth/Config>
#include "SceneCOM_i.h"
#ifdef _DEBUG
#import "..\bin\Debug\DataSourceCOMd.dll" no_namespace named_guids
#else 
#import "..\bin\Debug\DataSourceCOM.dll" no_namespace named_guids
#endif


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;
using namespace osgEarth;

// CConfigOpt
static _ATL_FUNC_INFO OnEndCacheInfo = 
{CC_STDCALL, NULL, 2, {VT_BSTR, VT_I4}};
class ATL_NO_VTABLE CConfigOpt :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CConfigOpt, &CLSID_ConfigOpt>,
	public IDispatchImpl<IConfigOpt, &IID_IConfigOpt, &LIBID_SceneCOMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
    public IDispEventSimpleImpl<IDC_DATACACHE_EVENT, CConfigOpt, &DIID__IDataCacheEvents>//, &LIBID_DataSourceCOMLib, 1, 0
{
public:
	CConfigOpt():mConf(NULL)
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CONFIGOPT)


BEGIN_COM_MAP(CConfigOpt)
	COM_INTERFACE_ENTRY(IConfigOpt)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

BEGIN_SINK_MAP(CConfigOpt)
    //SINK_ENTRY(IDC_DATACACHE_EVENT, 1 /*DISPID*/, OnEndCache /*Event Handler*/)
    SINK_ENTRY_INFO(IDC_DATACACHE_EVENT, DIID__IDataCacheEvents, 1, OnEndCache, &OnEndCacheInfo)
END_SINK_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}
    void Attach(Config* pConf)
    {
        mConf = pConf;
    }
    Config* GetConfig()
    {
        return mConf;
    }
    LONG GetType()
    {
        return mType;
    }
private:
    Config* mConf;
    LONG mType;
public:

    STDMETHOD(FromStringArray)(LONG type, VARIANT keys, VARIANT values);
    //STDMETHOD(AddChild)(VARIANT keys, VARIANT values);
    STDMETHOD(FromJSON)(LONG type, BSTR json);
    STDMETHOD(FromXML)(LONG type, BSTR xml);
    HRESULT __stdcall OnEndCache(LONG id, BSTR path)
    {
        ATLTRACE("CConfigOpt::OnEndCache\n");
        return S_OK;
    }

    ///
    //CConfigOpt* pConfig;
    //IDataCachePtr pDataCache;
    
    //hr = pConfig->DispEventAdvise(pDataCache);
    //_ASSERTE(SUCCEEDED(hr));
    //pDataCache->BeginCache(...);
    //if (pConfig->m_dwEventCookie != 0xFEFEFEFE)
    //{ pConfig->DispEventUnadvise(spSimpleObj);}
	 
    
};

OBJECT_ENTRY_AUTO(__uuidof(ConfigOpt), CConfigOpt)
