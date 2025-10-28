int __fastcall nonce_pop_handler_vbk(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  int v6; // r1
  int v7; // r2

  result = memcmp(a3 + 10, (const void *)(a1 + 492), 0x10u);
  if ( result )
    return sub_48C44(result);
  v6 = a3[6];
  v7 = a3[9];
  a2[285] = 0;
  a2[284] = v6;
  a2[312] = v7;
  return result;
}
