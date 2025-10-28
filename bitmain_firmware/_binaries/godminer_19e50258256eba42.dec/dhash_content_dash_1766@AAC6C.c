void *dhash_content_dash_1766()
{
  _DWORD src[6]; // [sp+4h] [bp-20h] BYREF
  void *dest; // [sp+1Ch] [bp-8h]

  src[3] = 0;
  src[0] = 697596;
  src[1] = 698980;
  src[2] = 699264;
  src[4] = "H";
  src[5] = 60;
  dest = calloc(1u, 0x18u);
  memcpy(dest, src, 0x18u);
  return dest;
}
