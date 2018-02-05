/* ******************************************************************** **
** @@ Lyrics Transliterator
** @  Copyrt : 
** @  Author : 
** @  Modify :
** @  Update :
** @  Dscr   :
** ******************************************************************** */

/* ******************************************************************** **
**                uses pre-compiled headers
** ******************************************************************** */

#include <stdafx.h>

#include "..\shared\file_find.h"

/* ******************************************************************** **
** @@                   internal defines
** ******************************************************************** */

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#ifdef NDEBUG
#pragma optimize("gsy",on)
#pragma comment(linker,"/FILEALIGN:512 /MERGE:.rdata=.text /MERGE:.data=.text /SECTION:.text,EWR /IGNORE:4078")
#endif 

#define ASCII_SIZE      (256)

/* ******************************************************************** **
** @@                   internal prototypes
** ******************************************************************** */

/* ******************************************************************** **
** @@                   external global variables
** ******************************************************************** */

extern DWORD   dwKeepError = 0;

/* ******************************************************************** **
** @@                   static global variables
** ******************************************************************** */
                  
static int  pXLIT[ASCII_SIZE];

/* ******************************************************************** **
** @@                   real code
** ******************************************************************** */

/* ******************************************************************** **
** @@ Cyrillic_2_Lyrics()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

static void Cyrillic_2_Lyrics(char* pszDst,const char* const pszSrc)
{
   *pszDst = 0;  // Reset

   int   iLen = strlen(pszSrc);

   for (int ii = 0; ii < iLen; ++ii)
   {
      int   iRet = pXLIT[(BYTE)pszSrc[ii]];

      if (iRet != -1)
      {
         strcat(pszDst,(char*)&iRet); 
      }
   }
}

/* ******************************************************************** **
** @@ Init()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

static void Init()
{   
   // Initialize
   for (int ii = 0; ii < ASCII_SIZE; ++ii)
   {
      pXLIT[ii] = ii;
   }

   // Space
//   pXLIT[0x20] = '_';

   // Hi ASCII
   // Do nothing !                         
   for (int jj = 0x80; jj <= 0xBF; ++jj)
   {
      pXLIT[jj] = -1;
   }

   // Syntax
   pXLIT[(BYTE)'!'] = ' ';
   pXLIT[(BYTE)','] = ' ';
   pXLIT[(BYTE)'.'] = ' ';
   pXLIT[(BYTE)':'] = ' ';
   pXLIT[(BYTE)';'] = ' ';
   pXLIT[(BYTE)'?'] = ' ';

   // Cyrillic Upper case
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';

   // Cyrillic Lower case
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
   pXLIT[(BYTE)'�'] = (BYTE)'�';
}

/* ******************************************************************** **
** @@ Proceed()
** @  Copyrt : 
** @  Author : 
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

static void Proceed(const char* const pszFileName)
{
   char     pszBackName[_MAX_PATH];
   char     pszDrive   [_MAX_DRIVE];
   char     pszDir     [_MAX_DIR];
   char     pszFName   [_MAX_FNAME];
   char     pszExt     [_MAX_EXT];

   _splitpath(pszFileName,pszDrive,pszDir,pszFName,pszExt);
   _makepath( pszBackName,pszDrive,pszDir,pszFName,"BAK");

   CopyFile(pszFileName,pszBackName,FALSE);

   FILE*    pIn = fopen(pszBackName,"rt");

   if (!pIn)
   {
      perror("\a\nOpen Input File Error !\n");
      return;
   }

   FILE*    pOut = fopen(pszFileName,"wt");

   if (!pOut)
   {
      perror("\a\nOpen Output File Error !\n");
      fclose(pIn);
      pIn = NULL;
      return;
   }

   const DWORD    BUF_SIZE = (0x01 << 20);   // About 1 Mb !

   char*    pBuf = new char[BUF_SIZE];

   if (!pBuf)
   {
      fclose(pIn);
      pIn = NULL;
      fclose(pOut);
      pOut = NULL;
      return;
   }

   char*    pOutBuf = new char[BUF_SIZE];

   if (!pOutBuf)
   {
      delete pBuf;
      pBuf = NULL;
      fclose(pIn);
      pIn = NULL;
      fclose(pOut);
      pOut = NULL;
      return;
   }

   while (fgets(pBuf,BUF_SIZE,pIn))
   {
      pBuf[BUF_SIZE - 1] = 0; // ASCIIZ !

      DWORD    dwEOL = strcspn(pBuf,"\r\n");

      pBuf[dwEOL] = 0;  // Remove EOL chars

      Cyrillic_2_Lyrics(pOutBuf,pBuf);

      if (*pOutBuf)
      {
         fprintf(pOut,"%s\n",pOutBuf);
      }
   }

   delete pBuf;
   pBuf = NULL;

   delete pOutBuf;
   pOutBuf = NULL;

   fclose(pIn);
   pIn = NULL;

   fclose(pOut);
   pOut = NULL;
}

/* ******************************************************************** **
** @@ ShowHelp()
** @  Copyrt : 
** @  Author : 
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

static void ShowHelp()
{
   const char  pszCopyright[] = "-*-   Lyrics   *   Copyright (c) Gazlan, 2015   -*-";
   const char  pszDescript [] = "Lyrics Transliterator";
   const char  pszE_Mail   [] = "complains_n_suggestions direct to gazlan@yandex.ru";

   printf("%s\n\n",pszCopyright);
   printf("%s\n\n",pszDescript);
   printf("Usage: Lyrics.com [wildcards]\n\n");
   printf("%s\n",pszE_Mail);
}

/* ******************************************************************** **
** @@ main()
** @  Copyrt : 
** @  Author : 
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

int main(int argc,char** argv)
{
   if ((argc < 2) || (argc > 4))
   {
      ShowHelp();
      return 0;
   }

   if (argc == 2 && ((!strcmp(argv[1],"?")) || (!strcmp(argv[1],"/?")) || (!strcmp(argv[1],"-?")) || (!stricmp(argv[1],"/h")) || (!stricmp(argv[1],"-h"))))
   {
      ShowHelp();
      return 0;
   }

   Init();
         
   FindFile   FF;

   FF.SetMask(argv[1]);

   int      iTotal = 0;

   while (FF.Fetch())
   {
      if ((FF._w32fd.dwFileAttributes | FILE_ATTRIBUTE_NORMAL) && !(FF._w32fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
      {
         Proceed(FF._w32fd.cFileName);
      }
   }

   printf("\n[i]: Processed %d file(s) total.\n",iTotal);

   return 0;
}

/* ******************************************************************** **
** @@                   End of File
** ******************************************************************** */
