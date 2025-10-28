void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_18D974 > 1 )
  {
    v0 = (char *)&unk_18D979;
    v1 = &dbl_18D9C8;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_18D978[dword_18D974] != v0 );
  }
}
