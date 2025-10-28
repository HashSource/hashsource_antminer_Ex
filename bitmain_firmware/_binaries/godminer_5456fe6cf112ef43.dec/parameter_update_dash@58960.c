int __fastcall parameter_update_dash(int a1, char a2, int a3)
{
  int v3; // r1
  int v6; // r0
  int v7; // s15

  if ( *(_BYTE *)(a1 + 144) )
    return 0;
  if ( a3 <= 800 )
    v3 = a2 & 1;
  else
    v3 = 0;
  if ( v3 )
  {
    v6 = sub_12C9E0(*(_DWORD *)(a1 + 772));
    v7 = (int)*(float *)(a1 + 760);
    *(float *)(a1 + 760) = (float)a3;
    *(_DWORD *)(a1 + 772) = (unsigned int)((double)(unsigned int)(v7 * v6) * 0.35);
  }
  else
  {
    sub_588D4(a1);
  }
  return 0;
}
