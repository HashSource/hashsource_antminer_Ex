int __fastcall adjust_working_freq_ltc(int a1, int a2)
{
  float v2; // s16
  int v3; // r5

  v2 = (float)(a2 + *(_DWORD *)(a1 + 280));
  if ( *(float *)(a1 + 768) <= v2 )
  {
    v2 = *(float *)(a1 + 768);
    v3 = 0;
    goto LABEL_3;
  }
  v3 = 9;
  if ( v2 >= 900.0 )
  {
LABEL_3:
    chip_setting_freq_ltc();
    *(_DWORD *)(a1 + 280) = (int)v2;
  }
  return v3;
}
