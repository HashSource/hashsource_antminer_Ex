int __fastcall packet_2_nonce_grin32(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  if ( a2[2] == 33 )
    return sub_A35E0(a1, a2, a3, a4, a5, a6, a7);
  else
    return 1;
}
