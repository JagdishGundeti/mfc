#if ! defined( FILE_64_CLASS_HEADER )

#define FILE_64_CLASS_HEADER

/*
** Author: Samuel R. Blackburn
**
** $Workfile: CFile64.hpp $
** $Revision: 2 $
** $Modtime: 1/26/00 6:03p $
** $Reuse Tracing Code: 1001 $
*/

/*
** NOTICE NOTICE NOTICE
**
** Many of the things you will see in this class go against the coding
** standards as well as good coding practices. The reason for this is we
** are trying to make a CFile drop-in replacement. This means we have to
** minimize the damage a replacement will make. So, we have to duplicate
** the bad habits of Microsoft. Where possible, we will do the right thing.
** One obvious break point will be using ULONGLONG instead of DWORD for
** things like file position.
*/

#if ! defined( FILE_ATTRIBUTE_ENCRYPTED )
#define FILE_ATTRIBUTE_ENCRYPTED (0x00000040)
#endif

#if ! defined( FILE_ATTRIBUTE_REPARSE_POINT )
#define FILE_ATTRIBUTE_REPARSE_POINT (0x00000400)
#endif

#if ! defined( FILE_ATTRIBUTE_SPARSE_FILE )
#define FILE_ATTRIBUTE_SPARSE_FILE (0x00000200)
#endif

#if ! defined( FILE_ATTRIBUTE_NOT_CONTENT_INDEXED )
#define FILE_ATTRIBUTE_NOT_CONTENT_INDEXED (0x00002000)
#endif

class CFile64
{
   private:

      CFile64( const CFile64& ) {};
      CFile64& operator=( const CFile64& ) { return( *this ); };

   protected:

      SECURITY_ATTRIBUTES * m_SecurityAttributes_p;

      SECURITY_DESCRIPTOR * m_SecurityDescriptor_p;

      HANDLE m_FileHandle;

      CString m_PathName;
      CString m_FileName;
      CString m_FileTitle;

      BOOL m_CloseOnDelete;

      void m_Initialize( void );
      void m_Uninitialize( void );

   public:

      // Flag values
      enum OpenFlags
      {
         modeRead =          0x0000,
         modeWrite =         0x0001,
         modeReadWrite =     0x0002,
         shareCompat =       0x0000,
         shareExclusive =    0x0010,
         shareDenyWrite =    0x0020,
         shareDenyRead =     0x0030,
         shareDenyNone =     0x0040,
         modeNoInherit =     0x0080,
         modeCreate =        0x1000,
         modeNoTruncate =    0x2000,
         typeText =          0x4000, // typeText and typeBinary are used in
         typeBinary =   (int)0x8000 // derived classes only
      };

      enum Attribute
      {
         normal =    0x00,
         readOnly =  0x01,
         hidden =    0x02,
         system =    0x04,
         volume =    0x08,
         directory = 0x10,
         archive =   0x20
      };

      enum SeekPosition
      {
         begin   = 0x0,
         current = 0x1,
         end     = 0x2
      };

      enum
      {
         hFileNull = -1
      };

      CFile64();
      CFile64( int file_handle );
      CFile64( LPCTSTR filename, UINT open_flags );
     ~CFile64();

      UINT m_hFile; // AGAINST CODING STANDARDS!!!

      virtual operator HFILE() const;

      virtual void                  Abort( void );
      virtual void                  Close( void );
      virtual CFile64 *             Duplicate( void ) const;
      virtual void                  Flush( void );
      virtual CString               GetFileName( void ) const;
      virtual CString               GetFilePath( void ) const;
      virtual CString               GetFileTitle( void ) const;
      virtual HANDLE                GetHandle( void ) const;
      virtual BOOL                  GetInformation( BY_HANDLE_FILE_INFORMATION& information ) const;
      virtual ULONGLONG             GetLength( void ) const;
      virtual ULONGLONG             GetPosition( void ) const;
      virtual SECURITY_ATTRIBUTES * GetSecurityAttributes( void ) const;
      virtual SECURITY_DESCRIPTOR * GetSecurityDescriptor( void ) const;
#if ! defined( WFC_STL )
      virtual BOOL                  GetStatus( CFileStatus& status ) const;
#endif // WFC_STL
      virtual void                  LockRange( ULONGLONG position, ULONGLONG number_of_bytes_to_lock );
#if ! defined( WFC_STL )
      virtual BOOL                  Open( LPCTSTR filename, UINT open_flags, CFileException * exception_p = NULL );
#else // WFC_STL
      virtual BOOL                  Open( LPCTSTR filename, UINT open_flags );
#endif // WFC_STL
      virtual DWORD                 Read( void * buffer, DWORD number_of_bytes_to_read );
      virtual DWORD                 Read( CByteArray& buffer, DWORD number_of_bytes_to_read );
      virtual DWORD                 ReadHuge( void * buffer, DWORD number_of_bytes_to_read );
      virtual ULONGLONG             Seek( ULONGLONG offset, UINT from );
      virtual void                  SeekToBegin( void );
      virtual ULONGLONG             SeekToEnd( void );
      virtual BOOL                  SetEndOfFile( ULONGLONG length ); // when CBigFile becomes not read-only
      virtual void                  SetFilePath( LPCTSTR new_name );
      virtual void                  SetLength( ULONGLONG length );
      virtual void                  UnlockRange( ULONGLONG position, ULONGLONG number_of_bytes_to_unlock );
      virtual void                  Write( const void * buffer, DWORD number_of_bytes_to_write );
      virtual void                  WriteHuge( const void * buffer, DWORD number_of_bytes_to_write );

#if defined( _DEBUG ) && ! defined( WFC_NO_DUMPING )

      virtual void                  Dump( CDumpContext& dump_context ) const;

#endif // _DEBUG

      static void PASCAL            Rename( LPCTSTR old_name, LPCTSTR new_name );
      static void PASCAL            Remove( LPCTSTR filename );
#if ! defined( WFC_STL )
      static BOOL PASCAL            GetStatus( LPCTSTR filename, CFileStatus& status );
      static void PASCAL            SetStatus( LPCTSTR filename, const CFileStatus& status );
#endif // WFC_STL
};

#endif // FILE_64_CLASS_HEADER
