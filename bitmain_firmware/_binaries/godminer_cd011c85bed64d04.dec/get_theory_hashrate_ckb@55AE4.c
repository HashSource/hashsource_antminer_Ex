int __fastcall get_theory_hashrate_ckb(int a1, double *a2)
{
  double v2; // d7
  int v3; // r3
  int result; // r0
  double v5; // d7

  v3 = *(unsigned __int8 *)(a1 + 276);
  if ( *(_BYTE *)(a1 + 276) )
    v2 = *(double *)(a1 + 288);
  else
    LODWORD(v2) = *(_DWORD *)(a1 + 768);
  result = 0;
  if ( v3 )
    v5 = v2 * 1000.0;
  else
    v5 = *(float *)&v2 * 540.0;
  *a2 = v5 * 1000.0 * 1000.0;
  return result;
}
