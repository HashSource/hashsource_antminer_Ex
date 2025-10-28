int __fastcall get_miner_working_status(int a1)
{
  int v1; // r1

  if ( byte_5AD669 != 1 )
  {
    sub_B47C4();
    byte_5AD669 = 1;
    byte_5AD666 = pools_active != 1;
  }
  v1 = *(_DWORD *)&byte_5AD664;
  *(_DWORD *)a1 = *(_DWORD *)&byte_5AD660;
  *(_DWORD *)(a1 + 4) = v1;
  *(_BYTE *)(a1 + 8) = byte_5AD668;
  return a1;
}
