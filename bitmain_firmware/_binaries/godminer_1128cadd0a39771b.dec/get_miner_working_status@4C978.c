int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_1673C4 )
  {
    byte_1673C8 = 0;
    byte_1673C9 = 0;
    byte_1673CA = 0;
    byte_1673CB = 0;
    byte_1673CC = 0;
    byte_1673CD = 0;
    byte_1673CE = 0;
    byte_1673CF = 0;
    byte_1673D0 = 0;
    byte_1673C4 = 1;
  }
  v1 = *(_DWORD *)&byte_1673CC;
  v2 = byte_1673D0;
  *(_DWORD *)result = *(_DWORD *)&byte_1673C8;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
