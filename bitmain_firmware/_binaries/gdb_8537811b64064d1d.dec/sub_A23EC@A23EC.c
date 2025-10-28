const char *__fastcall sub_A23EC(int a1)
{
  if ( (unsigned int)(a1 - 100) > 0xA )
    return "<?>";
  else
    return *(const char **)&asc_374020[4 * a1 - 332];
}
