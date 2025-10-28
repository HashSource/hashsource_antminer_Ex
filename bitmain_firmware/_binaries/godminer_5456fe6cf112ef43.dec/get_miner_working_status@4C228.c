int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_1663B4 )
  {
    byte_1663B8 = 0;
    byte_1663B9 = 0;
    byte_1663BA = 0;
    byte_1663BB = 0;
    byte_1663BC = 0;
    byte_1663BD = 0;
    byte_1663BE = 0;
    byte_1663BF = 0;
    byte_1663C0 = 0;
    byte_1663B4 = 1;
  }
  v1 = *(_DWORD *)&byte_1663BC;
  v2 = byte_1663C0;
  *(_DWORD *)result = *(_DWORD *)&byte_1663B8;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
