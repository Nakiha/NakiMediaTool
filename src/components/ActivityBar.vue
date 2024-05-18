<template>
  <div class="activity_bar">
    <div class="area icon"></div>
    <div class="area menu">menu</div>
    <div class="area title">title</div>
    <div class="area addtional"></div>
    <div class="area caption_ctrl">
      <button @click="onMinClick" class="min">min</button>
      <button @click="onMaxClick" class="max">max</button>
      <button @click="onCloseClick" class="close">close</button>
    </div>
  </div>
</template>

<script lang="ts">
export default {
  methods: {
    onMinClick: function() {
      window.ipcRenderer.send('page-min-size')
    },
    onMaxClick: function() {
      window.ipcRenderer.send('page-max-size')
    },
    onCloseClick: function() {
      window.ipcRenderer.send('page-close')
    }
  }
}
</script>

<style scoped>
  .activity_bar {
    height: 32px;
    flex-direction: row;
    display: flex;
    align-items: center;
    background-color: aqua;
    -webkit-app-region: drag;
  }

  .activity_bar .area {
    -webkit-app-region: no-drag;
    display: flex;
  }

  .icon {
    background-color: blue;
    height: 32px;
    width: 32px;
  }

  .menu {
    min-width: 32px;
  }

  .title {
    flex: 1;
    flex-direction: column;
    align-items: center;
  }

  .caption_ctrl button {
    height: 32px;
    width: 42px;
  }

</style>