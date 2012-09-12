#include "tv_show.h"

TV_Show::TV_Show(QString name, int seas, int ep, QString gen)
    : title(name), season(seas), episode(ep), genre(gen)
{}

void TV_Show::update_last_watched(int ep, int seas)
{
    if (seas != -1) season = seas;
    episode = ep;
}
