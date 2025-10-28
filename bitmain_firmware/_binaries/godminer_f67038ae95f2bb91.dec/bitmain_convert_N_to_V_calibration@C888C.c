void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  double *v1; // r2

  if ( dword_1B371C > 1 )
  {
    v0 = (char *)&unk_1B3721;
    v1 = &dbl_1B3770;
    do
    {
      ++v0;
      ++v1;
    }
    while ( &byte_1B3720[dword_1B371C] != v0 );
  }
}
