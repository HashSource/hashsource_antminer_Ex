int __fastcall redirect_nonce_output(int result, int a2)
{
  int v2; // r3
  bool v3; // zf

  v2 = *(_DWORD *)(result + 668);
  v3 = v2 == 0;
  if ( v2 )
    v3 = result == v2;
  if ( !v3 )
    *(_DWORD *)(result + 668) = result;
  *(_DWORD *)(a2 + 668) = result;
  return result;
}
