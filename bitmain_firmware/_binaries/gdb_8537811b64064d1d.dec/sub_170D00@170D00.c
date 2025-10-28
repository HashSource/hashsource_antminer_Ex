int __fastcall sub_170D00(int a1, int a2, const char *a3, int a4, int a5)
{
  int v7; // [sp+8h] [bp-8h] BYREF

  sub_21D640(&v7, a3, a4, 1, *(_DWORD *)(a1 + 8), 0);
  if ( v7 && *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v7 + 32) >> 3)) == 8 )
    return *(_DWORD *)(v7 + 24);
  if ( !a5 )
    sub_94708("No type named %s.", a3);
  return 0;
}
