import React, { useState } from "react";
import { movies } from "./Data.js";

const Movies = () => {
  const [movieList, setMovieList] = useState(movies);

  const filteredMovies = (selectedCategory) =>
    setMovieList(movies.filter((data) => data.category == selectedCategory));

  return (
    <>
      <div
        className="my-3"
        style={{ textAlign: "center", width: "1000px", margin: "auto" }}
      >
        <button
          onClick={() => filteredMovies("setMovieList")}
          type="button"
          className="btn btn-outline-primary mx-3"
        >
          All
        </button>
        <button
          onClick={() => filteredMovies("Action")}
          type="button"
          className="btn btn-outline-primary  mx-3"
        >
          Action
        </button>
        <button
          onClick={() => filteredMovies("Thriller")}
          type="button"
          className="btn btn-outline-light  mx-3"
        >
          Thriller
        </button>
        <button
          onClick={() => filteredMovies("Animation")}
          type="button"
          className="btn btn-outline-info  mx-3"
        >
          Animation
        </button>
        <button
          onClick={() => filteredMovies("Horror")}
          type="button"
          className="btn btn-outline-warning  mx-3"
        >
          Horror
        </button>
        <button
          onClick={() => filteredMovies("Drama")}
          type="button"
          className="btn btn-outline-info  mx-3"
        >
          Drama
        </button>
        <button
          onClick={() => filteredMovies("Sci-Fi")}
          type="button"
          className="btn btn-outline-light  mx-3"
        >
          Sci-fi
        </button>
      </div>

      <div className="main">
        {movieList.map((value) => (
          <div key={value.id} className="content">
            <div className="hover_effect" style={{ padding: "10px" }}>
              <img
                src={value.poster_path}
                className="images"
                style={{ width: "200px" }}
              />{" "}
            </div>
            <h5>{value.title}</h5>
            <h5>{value.release_date}</h5>
          </div>
        ))}
      </div>
    </>
  );
};

export default Movies;
