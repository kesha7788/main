
void Secret() {
    cin.get();
#if defined(_WIN32)
    system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#elif defined(__linux__)
    system("xdg-open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#elif defined(__APPLE__)
    system("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#else
    cout << endl;
#endif
}
