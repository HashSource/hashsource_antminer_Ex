void __fastcall sub_26185C(int a1, char *a2, int a3, int a4)
{
  char *v4; // r4
  int *v8; // r0
  int v9; // r0
  int v10; // [sp+8h] [bp-Ch] BYREF

  v4 = *(char **)(a1 + 12);
  v8 = sub_20F3B0(0);
  sub_FE000(&v10, v4, a2, v8, 1);
  if ( v10 )
  {
    if ( a4 == 2 && *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v10 + 32) >> 3)) == 8 )
      v9 = sub_26BBA8(*(_DWORD *)(v10 + 24));
    else
      sub_2611B4();
    if ( a3 )
      sub_2616E4(v9);
  }
}
