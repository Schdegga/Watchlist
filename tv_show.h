#ifndef TV_SHOW_H
#define TV_SHOW_H

#include <QString>

class TV_Show
{
public:
    // constructor with default values
    TV_Show(QString name = "", int seas = 1, int ep = 1, QString gen = "");

    // updates season and episode members. If no second argument is passed, season will not be changed
    void update_last_watched(int ep, int seas = -1);
    // only increases episode-member by one
    void watched_one_ep() { update_last_watched(this->episode += 1); }

    // set all the members individually
    void set_title  (QString name) { title = name; }
    void set_season (int seas)     { season = seas; }
    void set_episode(int ep)       { episode = ep; }
    void set_genre  (QString gen)  { genre = gen; }

private:
    QString title;
    int     season;
    int     episode;
    QString genre;
};

#endif // TV_SHOW_H
