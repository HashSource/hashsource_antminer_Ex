int __fastcall parameter_update_dash(int a1, char a2, unsigned int a3)
{
  int v3; // r1
  unsigned int v5; // r0
  int v6; // s15

  if ( *(_BYTE *)(a1 + 144) )
    return 0;
  if ( (int)a3 <= 800 )
    v3 = a2 & 1;
  else
    v3 = 0;
  if ( v3 )
  {
    v5 = *(_DWORD *)(a1 + 772) / a3;
    v6 = (int)*(float *)(a1 + 760);
    *(float *)(a1 + 760) = (float)(int)a3;
    *(_DWORD *)(a1 + 772) = (unsigned int)((double)(v6 * v5) * 0.35);
  }
  else
  {
    sub_58814(a1);
  }
  return 0;
}
