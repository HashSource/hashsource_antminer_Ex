int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_1743BC )
  {
    byte_1743C0 = 0;
    byte_1743C1 = 0;
    byte_1743C2 = 0;
    byte_1743C3 = 0;
    byte_1743C4 = 0;
    byte_1743C5 = 0;
    byte_1743C7 = 0;
    byte_1743C8 = 0;
    byte_1743BC = 1;
    byte_1743C6 = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_1743C4;
  v2 = byte_1743C8;
  *(_DWORD *)result = *(_DWORD *)&byte_1743C0;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
