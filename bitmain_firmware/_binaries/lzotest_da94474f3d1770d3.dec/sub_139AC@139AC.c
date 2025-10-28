int __fastcall sub_139AC(int a1, int a2, int a3, _DWORD *a4)
{
  int v7; // r0

  v7 = lzo_crc32(0, 0);
  lzo_crc32(v7, a3);
  *a4 = a2;
  return 0;
}
