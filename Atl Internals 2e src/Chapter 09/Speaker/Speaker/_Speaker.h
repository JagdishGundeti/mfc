

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Jun 21 15:18:07 2012
 */
/* Compiler settings for _Speaker.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef ___Speaker_h__
#define ___Speaker_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISpeaker_FWD_DEFINED__
#define __ISpeaker_FWD_DEFINED__
typedef interface ISpeaker ISpeaker;
#endif 	/* __ISpeaker_FWD_DEFINED__ */


#ifndef __INamedObject_FWD_DEFINED__
#define __INamedObject_FWD_DEFINED__
typedef interface INamedObject INamedObject;
#endif 	/* __INamedObject_FWD_DEFINED__ */


#ifndef __IListener_FWD_DEFINED__
#define __IListener_FWD_DEFINED__
typedef interface IListener IListener;
#endif 	/* __IListener_FWD_DEFINED__ */


#ifndef ___ISpeakerEvents_FWD_DEFINED__
#define ___ISpeakerEvents_FWD_DEFINED__
typedef interface _ISpeakerEvents _ISpeakerEvents;
#endif 	/* ___ISpeakerEvents_FWD_DEFINED__ */


#ifndef __CDemagogue_FWD_DEFINED__
#define __CDemagogue_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDemagogue CDemagogue;
#else
typedef struct CDemagogue CDemagogue;
#endif /* __cplusplus */

#endif 	/* __CDemagogue_FWD_DEFINED__ */


#ifndef __CEarPolitic_FWD_DEFINED__
#define __CEarPolitic_FWD_DEFINED__

#ifdef __cplusplus
typedef class CEarPolitic CEarPolitic;
#else
typedef struct CEarPolitic CEarPolitic;
#endif /* __cplusplus */

#endif 	/* __CEarPolitic_FWD_DEFINED__ */


#ifndef ____Impl__ISpeakerEvents_FWD_DEFINED__
#define ____Impl__ISpeakerEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class __Impl__ISpeakerEvents __Impl__ISpeakerEvents;
#else
typedef struct __Impl__ISpeakerEvents __Impl__ISpeakerEvents;
#endif /* __cplusplus */

#endif 	/* ____Impl__ISpeakerEvents_FWD_DEFINED__ */


/* header files for imported files */
#include "prsht.h"
#include "mshtml.h"
#include "mshtmhst.h"
#include "exdisp.h"
#include "objsafe.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf__Speaker_0000_0000 */
/* [local] */ 

#define	DISPID_VOLUME	( 1 )

#define	DISPID_SPEECH	( 2 )

#define	DISPID_SPEAK	( 3 )



extern RPC_IF_HANDLE __MIDL_itf__Speaker_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf__Speaker_0000_0000_v0_0_s_ifspec;

#ifndef __ISpeaker_INTERFACE_DEFINED__
#define __ISpeaker_INTERFACE_DEFINED__

/* interface ISpeaker */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISpeaker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C5AC360-51D5-4DA2-84F2-992D8584B807")
    ISpeaker : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Volume( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Volume( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Speech( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Speech( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Speak( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISpeakerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpeaker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpeaker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpeaker * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpeaker * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpeaker * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpeaker * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpeaker * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Volume )( 
            ISpeaker * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Volume )( 
            ISpeaker * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Speech )( 
            ISpeaker * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Speech )( 
            ISpeaker * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Speak )( 
            ISpeaker * This);
        
        END_INTERFACE
    } ISpeakerVtbl;

    interface ISpeaker
    {
        CONST_VTBL struct ISpeakerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpeaker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpeaker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpeaker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpeaker_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpeaker_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpeaker_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpeaker_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpeaker_get_Volume(This,pVal)	\
    ( (This)->lpVtbl -> get_Volume(This,pVal) ) 

#define ISpeaker_put_Volume(This,newVal)	\
    ( (This)->lpVtbl -> put_Volume(This,newVal) ) 

#define ISpeaker_get_Speech(This,pVal)	\
    ( (This)->lpVtbl -> get_Speech(This,pVal) ) 

#define ISpeaker_put_Speech(This,newVal)	\
    ( (This)->lpVtbl -> put_Speech(This,newVal) ) 

#define ISpeaker_Speak(This)	\
    ( (This)->lpVtbl -> Speak(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpeaker_INTERFACE_DEFINED__ */


/* interface __MIDL_itf__Speaker_0000_0001 */
/* [local] */ 

#define	DISPID_NAME	( 1 )



extern RPC_IF_HANDLE __MIDL_itf__Speaker_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf__Speaker_0000_0001_v0_0_s_ifspec;

#ifndef __INamedObject_INTERFACE_DEFINED__
#define __INamedObject_INTERFACE_DEFINED__

/* interface INamedObject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_INamedObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("450D6780-FC73-11d1-8CC3-00A0C9C8E50D")
    INamedObject : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INamedObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INamedObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INamedObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INamedObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INamedObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INamedObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INamedObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INamedObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            INamedObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            INamedObject * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } INamedObjectVtbl;

    interface INamedObject
    {
        CONST_VTBL struct INamedObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamedObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INamedObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INamedObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INamedObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INamedObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INamedObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INamedObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INamedObject_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define INamedObject_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INamedObject_INTERFACE_DEFINED__ */


/* interface __MIDL_itf__Speaker_0000_0002 */
/* [local] */ 

#define	DISPID_ONWHISPER	( 1 )

#define	DISPID_ONTALK	( 2 )

#define	DISPID_ONYELL	( 3 )

typedef 
enum SpeakerRole
    {	Defendant	= 0,
	Plaintiff	= 1
    } 	SpeakerRole;



extern RPC_IF_HANDLE __MIDL_itf__Speaker_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf__Speaker_0000_0002_v0_0_s_ifspec;

#ifndef __IListener_INTERFACE_DEFINED__
#define __IListener_INTERFACE_DEFINED__

/* interface IListener */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IListener;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC46569D-9123-435E-AE10-06DF0FCA6767")
    IListener : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ListenTo( 
            /* [in] */ enum SpeakerRole role,
            /* [in] */ IUnknown *pSpeaker) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopListening( 
            /* [in] */ enum SpeakerRole role,
            /* [in] */ IUnknown *pSpeaker) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IListenerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListener * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListener * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListener * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IListener * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IListener * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IListener * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IListener * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ListenTo )( 
            IListener * This,
            /* [in] */ enum SpeakerRole role,
            /* [in] */ IUnknown *pSpeaker);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopListening )( 
            IListener * This,
            /* [in] */ enum SpeakerRole role,
            /* [in] */ IUnknown *pSpeaker);
        
        END_INTERFACE
    } IListenerVtbl;

    interface IListener
    {
        CONST_VTBL struct IListenerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListener_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListener_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListener_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListener_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IListener_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IListener_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IListener_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IListener_ListenTo(This,role,pSpeaker)	\
    ( (This)->lpVtbl -> ListenTo(This,role,pSpeaker) ) 

#define IListener_StopListening(This,role,pSpeaker)	\
    ( (This)->lpVtbl -> StopListening(This,role,pSpeaker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListener_INTERFACE_DEFINED__ */



#ifndef __Speaker_LIBRARY_DEFINED__
#define __Speaker_LIBRARY_DEFINED__

/* library Speaker */
/* [helpstring][uuid][version] */ 


EXTERN_C const IID LIBID_Speaker;

#ifndef ___ISpeakerEvents_DISPINTERFACE_DEFINED__
#define ___ISpeakerEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ISpeakerEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__ISpeakerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("EF75866F-28FA-4411-8A7D-AE7B65BB7F95")
    _ISpeakerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ISpeakerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISpeakerEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISpeakerEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISpeakerEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ISpeakerEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ISpeakerEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ISpeakerEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ISpeakerEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _ISpeakerEventsVtbl;

    interface _ISpeakerEvents
    {
        CONST_VTBL struct _ISpeakerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISpeakerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ISpeakerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ISpeakerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ISpeakerEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ISpeakerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ISpeakerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ISpeakerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISpeakerEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CDemagogue;

#ifdef __cplusplus

class DECLSPEC_UUID("798AC41B-03D6-45A7-8311-8056A7EF0CFD")
CDemagogue;
#endif

EXTERN_C const CLSID CLSID_CEarPolitic;

#ifdef __cplusplus

class DECLSPEC_UUID("D6C76965-DF46-45B7-A6BE-8D4A943C39A1")
CEarPolitic;
#endif

EXTERN_C const CLSID CLSID___Impl__ISpeakerEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("56A463B9-5BBE-3862-AFAD-00AE7AFBA291")
__Impl__ISpeakerEvents;
#endif
#endif /* __Speaker_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

