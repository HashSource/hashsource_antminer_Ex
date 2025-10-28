int __fastcall redirect_nonce_output(int result, int a2)
{
  while ( result != *(_DWORD *)(result + 912) && *(_DWORD *)(result + 912) )
    *(_DWORD *)(result + 912) = result;
  *(_DWORD *)(a2 + 912) = result;
  return result;
}
