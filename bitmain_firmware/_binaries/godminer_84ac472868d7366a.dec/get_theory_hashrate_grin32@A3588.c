int __fastcall get_theory_hashrate_grin32(int a1, double *a2)
{
  int32x2_t v2; // d5
  unsigned __int32 v3; // r3
  unsigned int v4; // s12
  __int64 v6; // r2

  if ( *(_BYTE *)(a1 + 268) )
  {
    v6 = *(_QWORD *)(a1 + 280);
    *(_QWORD *)a2 = v6;
    return 0;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 272);
    v4 = *(_DWORD *)(a1 + 204);
    v2.n64_u32[0] = v3;
    *a2 = vcvt_n_f64_s32(v2, 1u) / (double)v4 * 1000.0 * 1000.0;
    return 0;
  }
}
