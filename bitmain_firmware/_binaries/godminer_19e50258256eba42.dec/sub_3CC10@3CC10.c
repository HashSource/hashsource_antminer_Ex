int __fastcall sub_3CC10(int result, unsigned __int8 a2)
{
  if ( result == 1 )
  {
    freq_scan_status = 1;
    return result;
  }
  if ( result > 1 )
  {
    if ( result == 2 )
    {
      freq_scan_status = 2;
      strcpy((char *)&search_failed_info, "R:1");
      return *(_DWORD *)"R:1";
    }
    if ( result == 48 )
    {
      freq_scan_status = 48;
      return snprintf((char *)&search_failed_info, 0x100u, "G%u:1", a2);
    }
  }
  else if ( !result )
  {
    freq_scan_status = 0;
    return result;
  }
  freq_scan_status = 0;
  strcpy((char *)&search_failed_info, "unknown");
  return *(_DWORD *)"unknown";
}
