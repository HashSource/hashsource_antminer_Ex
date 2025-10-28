int sub_1F857C()
{
  sub_539E8(
    "reverse-step",
    0,
    (int)sub_1F81D8,
    (int)"Step program backward until it reaches the beginning of another source line.\n"
         "Argument N means do this N times (or till program stops for another reason).");
  sub_547D8((int)"rs", "reverse-step", 8, 1);
  sub_539E8(
    "reverse-next",
    0,
    (int)sub_1F81C4,
    (int)"Step program backward, proceeding through subroutine calls.\n"
         "Like the \"reverse-step\" command as long as subroutine calls do not happen;\n"
         "when they do, the call is treated as one instruction.\n"
         "Argument N means do this N times (or till program stops for another reason).");
  sub_547D8((int)"rn", "reverse-next", 8, 1);
  sub_539E8(
    "reverse-stepi",
    0,
    (int)sub_1F81B0,
    (int)"Step backward exactly one instruction.\n"
         "Argument N means do this N times (or till program stops for another reason).");
  sub_547D8((int)"rsi", "reverse-stepi", 8, 0);
  sub_539E8(
    "reverse-nexti",
    0,
    (int)sub_1F819C,
    (int)"Step backward one instruction, but proceed through called subroutines.\n"
         "Argument N means do this N times (or till program stops for another reason).");
  sub_547D8((int)"rni", "reverse-nexti", 8, 0);
  sub_539E8(
    "reverse-continue",
    0,
    (int)sub_1F8188,
    (int)"Continue program being debugged but run it in reverse.\n"
         "If proceeding from breakpoint, a number N may be used as an argument,\n"
         "which means to set the ignore count of that breakpoint to N - 1 (so that\n"
         "the breakpoint won't break until the Nth time it is reached).");
  sub_547D8((int)"rc", "reverse-continue", 8, 0);
  sub_539E8(
    "reverse-finish",
    0,
    (int)sub_1F8174,
    (int)"Execute backward until just before selected stack frame is called.");
  sub_539E8(
    "bookmark",
    9,
    (int)sub_1F7F68,
    (int)"Set a bookmark in the program's execution history.\n"
         "A bookmark represents a point in the execution history \n"
         "that can be returned to at a later point in the debug session.");
  sub_539B4(
    "bookmarks",
    (int)sub_1F8394,
    (int)"Status of user-settable bookmarks.\n"
         "Bookmarks are user-settable markers representing a point in the \n"
         "execution history that can be returned to later in the same debug \n"
         "session.");
  sub_5329C(
    "bookmark",
    9,
    (int)sub_1F81EC,
    (int)"Delete a bookmark from the bookmark list.\n"
         "Argument is a bookmark number or numbers,\n"
         " or no argument to delete all bookmarks.\n",
    &dword_4747A0);
  return sub_539E8(
           "goto-bookmark",
           9,
           (int)sub_1F8420,
           (int)"Go to an earlier-bookmarked point in the program's execution history.\n"
                "Argument is the bookmark number of a bookmark saved earlier by using \n"
                "the 'bookmark' command, or the special arguments:\n"
                "  start (beginning of recording)\n"
                "  end   (end of recording)\n");
}
