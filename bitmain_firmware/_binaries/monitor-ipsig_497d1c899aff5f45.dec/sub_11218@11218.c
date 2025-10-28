int __fastcall sub_11218(void *buf)
{
  const char *v1; // r0

  if ( sendto(dword_220A4, buf, 0xAu, 0, (const struct sockaddr *)&dword_220E4, 0x10u) >= 0 )
    LOWORD(v1) = 5912;
  else
    LOWORD(v1) = 5880;
  HIWORD(v1) = 1;
  return printf(v1);
}
