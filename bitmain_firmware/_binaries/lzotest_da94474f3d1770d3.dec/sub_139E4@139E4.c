int __fastcall sub_139E4(int a1, int a2, int a3, _DWORD *a4)
{
  int v7; // r0

  v7 = lzo_adler32(0, 0, 0);
  lzo_adler32(v7, a3, a2);
  *a4 = a2;
  return 0;
}
