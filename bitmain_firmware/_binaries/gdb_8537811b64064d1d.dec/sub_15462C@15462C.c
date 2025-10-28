_DWORD *sub_15462C()
{
  int v0; // r0
  int v1; // r0
  _DWORD *result; // r0

  v0 = sub_152E28();
  dword_487698 = sub_1FD5B8(v0);
  signal(2, (__sighandler_t)sub_153A1C);
  dword_487680 = (int)sub_153150((int)sub_1536C8, 0);
  signal(15, (__sighandler_t)sub_153A44);
  dword_487688 = (int)sub_153150((int)sub_153A10, 0);
  signal(5, 0);
  signal(3, (__sighandler_t)sub_1538B8);
  dword_487678 = (int)sub_153150((int)nullsub_52, 0);
  if ( signal(1, (__sighandler_t)sub_15388C) == (__sighandler_t)1 )
    LOWORD(v1) = 13652;
  else
    LOWORD(v1) = 14608;
  HIWORD(v1) = 21;
  dword_487674 = (int)sub_153150(v1, 0);
  signal(8, (__sighandler_t)sub_153860);
  dword_487670 = (int)sub_153150((int)sub_153850, 0);
  result = sub_153150((int)sub_1537DC, 0);
  dword_48767C = (int)result;
  return result;
}
