int __fastcall sub_3CD18(char *a1, size_t a2, int a3)
{
  switch ( freq_scan_status )
  {
    case 1:
      snprintf(a1, a2, "%d", a3);
      break;
    case 2:
    case 35:
    case 48:
      snprintf(a1, a2, "%s:%s", "searchfailed", (const char *)&search_failed_info);
      break;
    default:
      snprintf(a1, a2, "searching");
      break;
  }
  return 0;
}
