void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_1775C0 > 1 )
  {
    v0 = (char *)&unk_177561;
    v1 = (char *)&unk_177570;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_177560[dword_1775C0] != v0 );
  }
}
