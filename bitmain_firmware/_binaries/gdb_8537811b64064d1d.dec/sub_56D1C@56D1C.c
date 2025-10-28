int sub_56D1C()
{
  const char *v0; // r5
  const char *v1; // r0

  if ( dword_4747F4 )
  {
    sub_259880("Currently logging to \"%s\".\n", (const char *)dword_4747F4);
    v0 = (const char *)dword_4747F0;
    if ( dword_4747F4 && !strcmp((const char *)dword_4747F0, (const char *)dword_4747F4) )
      goto LABEL_4;
  }
  else
  {
    v0 = (const char *)dword_4747F0;
  }
  sub_259880("Future logs will be written to %s.\n", v0);
LABEL_4:
  if ( dword_4747F8 )
    LOWORD(v1) = 32168;
  else
    LOWORD(v1) = 32204;
  HIWORD(v1) = 53;
  sub_259880(v1);
  if ( dword_4747FC )
    return sub_259880("Output will be sent only to the log file.\n");
  else
    return sub_259880("Output will be logged and displayed.\n");
}
