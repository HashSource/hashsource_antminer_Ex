void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_16C6B0 > 1 )
  {
    v0 = (char *)&unk_16C651;
    v1 = (char *)&unk_16C660;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_16C650[dword_16C6B0] != v0 );
  }
}
