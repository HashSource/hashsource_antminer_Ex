int __fastcall sub_4EB94(int a1, int a2, int a3, int a4)
{
  char *v7; // r0
  _DWORD v9[2]; // [sp+0h] [bp-8h] BYREF

  v7 = sub_4D7A4();
  if ( !v7 || !v7[2] )
    return -1;
  ((void (__fastcall *)(int, int, int, _DWORD *))loc_4EADC)(a2, a3, a4, v9);
  sub_4DC30(v9, 1);
  return 0;
}
