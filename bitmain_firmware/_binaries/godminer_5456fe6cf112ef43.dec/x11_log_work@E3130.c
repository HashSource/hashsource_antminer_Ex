int x11_log_work()
{
  int result; // r0
  FILE *v1; // r5
  size_t v2; // r0
  char v3[260]; // [sp+0h] [bp-104h] BYREF

  memset(v3, 0, 0x100u);
  result = fopen64("/tmp/x11_dump_file.log", "a");
  g_logwork_file = result;
  if ( result )
  {
    v1 = (FILE *)result;
    v2 = strlen(v3);
    fwrite(v3, v2, 1u, v1);
    fwrite("\n", 1u, 1u, (FILE *)g_logwork_file);
    return fflush((FILE *)g_logwork_file);
  }
  return result;
}
