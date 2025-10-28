int __fastcall sub_FA64C(int a1)
{
  if ( !*(_DWORD *)(dword_487D2C + 16) && a1 )
    sub_94708("No executable file specified.\nUse the \"file\" or \"exec-file\" command.");
  return *(_DWORD *)(dword_487D2C + 16);
}
