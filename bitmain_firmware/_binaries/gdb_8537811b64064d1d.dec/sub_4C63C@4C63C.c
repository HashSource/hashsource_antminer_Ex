void *__fastcall sub_4C63C(const char **a1, int a2)
{
  if ( a2 <= 0 )
  {
    sub_94728(
      "nat/linux-namespaces.c",
      98,
      "%s: Assertion `%s' failed.",
      "const char* linux_ns_filename(linux_ns*, int)",
      "pid > 0");
    JUMPOUT(0x4C6A8);
  }
  sub_93198(&unk_47373C, 4096, "/proc/%d/ns/%s", a2, *a1);
  return &unk_47373C;
}
