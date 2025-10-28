int get_max_voltage()
{
  double v0; // d0

  if ( !byte_16734C )
    return -1;
  bitmain_convert_N_to_V(0);
  return (int)(v0 * 100.0);
}
