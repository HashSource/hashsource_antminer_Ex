int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_195C84 )
  {
    byte_195C88 = 0;
    byte_195C89 = 0;
    byte_195C8A = 0;
    byte_195C8B = 0;
    byte_195C8C = 0;
    byte_195C8D = 0;
    byte_195C8F = 0;
    byte_195C90 = 0;
    byte_195C84 = 1;
    byte_195C8E = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_195C8C;
  v2 = byte_195C90;
  *(_DWORD *)result = *(_DWORD *)&byte_195C88;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
