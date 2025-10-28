void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_16D6C8 > 1 )
  {
    v0 = (char *)&unk_16D669;
    v1 = (char *)&unk_16D678;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_16D668[dword_16D6C8] != v0 );
  }
}
