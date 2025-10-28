void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_16C6B8 > 1 )
  {
    v0 = (char *)&unk_16C659;
    v1 = (char *)&unk_16C668;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_16C658[dword_16C6B8] != v0 );
  }
}
