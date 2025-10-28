bool __fastcall sub_15DA6C(int a1, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  if ( !v2 )
  {
    sub_160DFC(a1, a1 + 12);
    v2 = *(_DWORD *)(a1 + 16);
  }
  return a2 == v2;
}
