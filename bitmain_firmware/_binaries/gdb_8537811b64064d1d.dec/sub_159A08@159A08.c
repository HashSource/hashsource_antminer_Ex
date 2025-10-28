int __fastcall sub_159A08(int a1)
{
  _DWORD *v1; // r3

  v1 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 12) + 24) + 24);
  if ( !*v1 )
    sub_94708("Lower bound may not be '*' in F77");
  return v1[2];
}
