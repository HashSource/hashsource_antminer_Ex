int __fastcall update_chip_status(unsigned int a1, unsigned int a2, int a3)
{
  if ( byte_5AEF84[*(_DWORD *)(a1 + 264)] != 1 )
  {
    sub_BA3D0(a1);
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 504);
    update_str_and_flag(__SPAIR64__(a2, a1), (__int64 *)(a3 + 48));
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 464);
    byte_5AEF84[*(_DWORD *)(a1 + 264)] = 1;
  }
  else if ( *(_BYTE *)(a1 + 279) == 1 )
  {
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 504);
    chip_speed_test(a1);
    update_str_and_flag(__SPAIR64__(a2, a1), (__int64 *)(a3 + 48));
  }
  return a3 + 48;
}
