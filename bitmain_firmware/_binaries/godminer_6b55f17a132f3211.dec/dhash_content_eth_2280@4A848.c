_DWORD *dhash_content_eth_2280()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_4A580;
  result[1] = sub_4A5E4;
  result[2] = sub_4A754;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
