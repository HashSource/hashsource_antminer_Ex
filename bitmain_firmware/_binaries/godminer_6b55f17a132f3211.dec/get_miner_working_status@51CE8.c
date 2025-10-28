int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_1660A4 )
  {
    byte_1660A8 = 0;
    byte_1660A9 = 0;
    byte_1660AA = 0;
    byte_1660AB = 0;
    byte_1660AC = 0;
    byte_1660AD = 0;
    byte_1660AF = 0;
    byte_1660B0 = 0;
    byte_1660A4 = 1;
    byte_1660AE = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_1660AC;
  v2 = byte_1660B0;
  *(_DWORD *)result = *(_DWORD *)&byte_1660A8;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
