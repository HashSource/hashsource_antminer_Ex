double __fastcall be256_target_to_double_diff_base(unsigned int *a1)
{
  sub_12E60C(bswap32(a1[1]), bswap32(*a1));
  sub_12E60C(bswap32(a1[3]), bswap32(a1[2]));
  sub_12E60C(bswap32(a1[5]), bswap32(a1[4]));
  return sub_12E60C(bswap32(a1[7]), bswap32(a1[6]));
}
