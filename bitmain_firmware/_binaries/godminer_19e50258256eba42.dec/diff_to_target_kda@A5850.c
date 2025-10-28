void *__fastcall diff_to_target_kda(void *a1)
{
  char src[128]; // [sp+10h] [bp-84h] BYREF

  diff_to_le256_target_base(src);
  sub_A5730(src, 32);
  return memcpy(a1, src, 0x20u);
}
