int __fastcall get_theory_hashrate_ae(int a1, double *a2)
{
  int v2; // s12
  unsigned int v3; // s10
  __int64 v5; // r2

  if ( *(_BYTE *)(a1 + 268) )
  {
    v5 = *(_QWORD *)(a1 + 280);
    *(_QWORD *)a2 = v5;
    return 0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 272);
    v3 = *(_DWORD *)(a1 + 204);
    *a2 = (double)v2 * 4.0 / (double)v3 * 1000.0 * 1000.0;
    return 0;
  }
}
