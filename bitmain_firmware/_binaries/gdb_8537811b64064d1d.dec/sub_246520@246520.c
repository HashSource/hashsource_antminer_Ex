ssize_t __fastcall sub_246520(void *buf, signed int nbytes)
{
  ssize_t result; // r0

  result = read(dword_46DCEC, buf, nbytes);
  if ( result < 0 )
    sub_258B2C(dword_48A598);
  if ( nbytes > result )
    sub_94708("Premature end of file while reading trace file");
  return result;
}
