<template>
  <div id="app">
    <nav class="navbar navbar-expand-lg navbar-light bg-light">
      <div class="container-fluid">
        <button
          class="navbar-toggler"
          type="button"
          data-bs-toggle="collapse"
          data-bs-target="#navbarTogglerDemo03"
          aria-controls="navbarTogglerDemo03"
          aria-expanded="false"
          aria-label="Toggle navigation"
        >
          <span class="navbar-toggler-icon"></span>
        </button>
        <a class="navbar-brand" ><router-link to="/"
                    >Fitness</router-link
                    ></a>
        <div class="collapse navbar-collapse" id="navbarTogglerDemo03">
          <ul class="navbar-nav me-auto mb-2 mb-lg-0" />
          <form class="d-flex">
            <input
              class="form-control me-2"
              type="search"
              placeholder="Search friends or post"
              aria-label="Search friends or post"
              size="70"
            />
            <button class="btn btn-outline-success" type="submit">
              Search
            </button>
          </form>
          <ul class="navbar-nav ms-auto">
            <li class="nav-item">
              <a
                class="nav-link dropdown-toggle"
                role="button"
                data-bs-toggle="dropdown"
                aria-expanded="false"
                >Account</a
              >
              <ul
                class="dropdown-menu dropdown-menu-end"
                aria-labelledby="navbarDropdown"
              >
                <li>
                  <a
                    ><router-link
                      class="dropdown-item"
                      to="/profile"
                      v-if="!user.id"
                      ><i class="fas fa-sign-in-alt"></i
                      >{{ "\xa0" }}Profile</router-link
                    ></a
                  >
                </li>
                <li>
                  <a
                    ><router-link
                      class="dropdown-item"
                      to="/login"
                      v-if="!user.id"
                      ><i class="fas fa-sign-in-alt"></i
                      >{{ "\xa0" }}Login</router-link
                    ></a
                  >
                </li>
                <li>
                  <a
                    ><router-link
                      class="dropdown-item"
                      to="/register"
                      v-if="!user.id"
                      ><i class="fas fa-user-plus"></i
                      >{{ "\xa0" }}Register</router-link
                    ></a
                  >
                </li>
              </ul>
            </li>
            
          </ul>
        </div>
      </div>
    </nav>
    <div class="container">
      <div class="row">
        <div class="col-2">
          <div class="dropdown float-end">
        <button
          class="btn btn-secondary btn-sm dropdown-toggle"
          type="button"
          id="dropdownMenuButton1"
          data-bs-toggle="dropdown"
          aria-expanded="false"
        >
          ประเภทโพสต์
        </button>
        <ul class="dropdown-menu" aria-labelledby="dropdownMenuButton1">
          <li><a class="dropdown-item" href="#">test</a></li>
          <li><a class="dropdown-item" href="#">test</a></li>
          <li><a class="dropdown-item" href="#">test</a></li>
        </ul>
      </div>
        </div>
        <div class="col-8">
          <router-view
            :key="$route.fullPath"
            class="d-flex justify-content-center"
          />
        </div>
        <div class="col-2">
          <div class="list-group">
            <router-link
              to="/-"
              type="button"
              class="list-group-item list-group-item-action"
            >
              จัดตารางเวลา
            </router-link>
            <router-link
              to="/createpost"
              type="button"
              class="list-group-item list-group-item-action"
            >
              สร้างโพสต์
            </router-link>
            <router-link
              to="/recommanded"
              type="button"
              class="list-group-item list-group-item-action"
            >
              คำแนะนำ
            </router-link>
            <router-link
              to="/bmi"
              type="button"
              class="list-group-item list-group-item-action"
            >
              BMI
            </router-link>
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
document.addEventListener("DOMContentLoaded", () => {
  // Get all "navbar-burger" elements
  const $navbarBurgers = Array.prototype.slice.call(
    document.querySelectorAll(".navbar-burger"),
    0
  );

  // Check if there are any navbar burgers
  if ($navbarBurgers.length > 0) {
    // Add a click event on each of them
    $navbarBurgers.forEach((el) => {
      el.addEventListener("click", () => {
        // Get the target from the "data-target" attribute
        const target = el.dataset.target;
        const $target = document.getElementById(target);

        // Toggle the "is-active" class on both the "navbar-burger" and the "navbar-menu"
        el.classList.toggle("is-active");
        $target.classList.toggle("is-active");
      });
    });
  }
});

export default {
  data() {
    return {
      username: "",
      count: 0,
      user: {},
    };
  },
  methods: {
    logout() {
      localStorage.clear();
    },
  },
  mounted() {
    this.username = localStorage.getItem("name");
  },
};
</script>
